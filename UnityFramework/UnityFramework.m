//
//  UnityFramework.m
//  UnityFramework
//
//  Created by kazuki.horie.ts on 2019/12/17.
//  Copyright © 2019 Kazuki Horie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UnityFramework.h"
#import "UnityAppController.h"


@implementation UnityFramework

UnityFramework* _gUnityFramework = nil;

+ (UnityFramework*)getInstance
{
    return nil;
}

- (UnityAppController*)appController
{
    return nil;
}

- (void)setExecuteHeader:(const MachHeader*)header
{
    
}

- (void)showUnityWindow
{
}

- (void)setDataBundleId:(const char*)bundleId
{
}

- (void)registerFrameworkListener:(id<UnityFrameworkListener>)obj
{
}

- (void)unregisterFrameworkListener:(id<UnityFrameworkListener>)obj
{
}

- (void)runEmbeddedWithArgc:(int)argc argv:(char*[])argv appLaunchOpts:(NSDictionary*)appLaunchOpts
{
}

- (void)unloadApplication:(bool)allowReload {
    
}
@end


UnityFramework* UnityFrameworkLoad()
{
    return nil;
}
