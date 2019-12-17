//
//  NativeCallProxy.m
//  UnityFramework
//
//  Created by kazuki.horie.ts on 2019/12/17.
//  Copyright © 2019 Kazuki Horie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NativeCallProxy.h"

@implementation UnityBridgeAPI
id<UnityBridgeNativeCallsProtocol> api = NULL;
+ (void) registerAPIForNativeCalls:(id<UnityBridgeNativeCallsProtocol>)proxy {
    api = proxy;
}
@end
