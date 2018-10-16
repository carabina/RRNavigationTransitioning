//
//  _RRPopAnimator.h
//  RRNavigationTransitioning
//
//  Created by Shaw on 10/16/18.
//  Copyright © 2018 RedRain. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface _RRPopAnimator : NSObject <UIViewControllerAnimatedTransitioning>
@property (nonatomic, assign) BOOL fromRight;
@end

NS_ASSUME_NONNULL_END
