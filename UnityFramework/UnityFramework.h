//
//  UnityFramework.h
//  UnityFramework
//
//  Created by kazuki.horie.ts on 2019/12/16.
//  Copyright © 2019 Kazuki Horie. All rights reserved.
//

#ifndef UnityFramework_h
#define UnityFramework_h

#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#include <mach-o/ldsyms.h>
typedef struct
#ifdef __LP64__
    mach_header_64
#else
    mach_header
#endif
    MachHeader;

//#define _MH_EXECUTE_SYM    "__mh_execute_header"
//#define MH_EXECUTE_SYM    "_mh_execute_header"
//extern const struct
//#ifdef __LP64__
//mach_header_64
//#else
//mach_header
//#endif
//_mh_execute_header;

// important app life-cycle events
__attribute__ ((visibility("default")))
@protocol UnityFrameworkListener<NSObject>
@optional
- (void)unityDidUnload:(NSNotification*)notification;
@end

@interface UnityFramework : NSObject
{
}
- (UnityAppController*)appController;

+ (UnityFramework*)getInstance;
- (void)setExecuteHeader:(const MachHeader*)header;
- (void)showUnityWindow;
- (void)setDataBundleId:(const char*)bundleId;
- (void)registerFrameworkListener:(id<UnityFrameworkListener>)obj;
- (void)unregisterFrameworkListener:(id<UnityFrameworkListener>)obj;
- (void)runEmbeddedWithArgc:(int)argc argv:(char*[])argv appLaunchOpts:(NSDictionary*)appLaunchOpts;
- (void)unloadApplication;
@end

#endif /*UnityFramework*/
