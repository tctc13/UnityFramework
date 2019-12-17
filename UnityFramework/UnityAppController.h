//
//  UnityAppController.h
//  UnityFramework
//
//  Created by kazuki.horie.ts on 2019/12/17.
//  Copyright © 2019 Kazuki Horie. All rights reserved.
//

#ifndef UnityAppController_h
#define UnityAppController_h

#import <UIKit/UIKit.h>

@interface UnityAppController : NSObject<UIApplicationDelegate>
{
    UIView* _rootView;
}
@property (readonly, copy, nonatomic) UIView* rootView;
@end

#endif /* UnityAppController_h */
