//
//  NativeCallProxy.h
//  UnityFramework
//
//  Created by kazuki.horie.ts on 2019/12/16.
//  Copyright © 2019 Kazuki Horie. All rights reserved.
//

#ifndef NativeCallProxy_h
#define NativeCallProxy_h

@protocol UnityBridgeNativeCallsProtocol
@required
- (void)finishAnimation;
@required
- (NSString *)requestParams;
@end

__attribute__((visibility("default")))
@interface UnityBridgeAPI: NSObject
+ (void) registerAPIForNativeCalls:(id<UnityBridgeNativeCallsProtocol>)proxy;
@end


#endif /* NativeCallProxy_h */
