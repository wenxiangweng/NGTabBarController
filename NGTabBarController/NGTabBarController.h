//
//  NGTabBarController.h
//  NGTabBarController
//
//  Created by Tretter Matthias on 14.02.12.
//  Copyright (c) 2012 NOUS Wissensmanagement GmbH. All rights reserved.
//

#import "NGTabBarControllerDelegate.h"
#import "NGTabBar.h"
#import "NGTabBarItem.h"
#import "NGTabBarControllerAnimation.h"


/** NGTabBarController is a vertical TabBar displayed on the left side of the device */
@interface NGTabBarController : UIViewController

/** An array of the view controllers displayed by the tab bar */
@property (nonatomic, copy) NSArray *viewControllers;
/** The index of the view controller associated with the currently selected tab item. */
@property (nonatomic, assign) NSUInteger selectedIndex;
/** The view controller associated with the currently selected tab item. */
@property (nonatomic, unsafe_unretained) UIViewController *selectedViewController;

/** The tab bar controller’s delegate object. */
@property (nonatomic, unsafe_unretained) id<NGTabBarControllerDelegate> delegate;

/** The tableView used to display all tab bar elements */
@property (nonatomic, strong, readonly) NGTabBar *tabBar;
/** The class of the tableViewCell of the tabBar, defaults to NGTabBarCell */
@property (nonatomic, assign) Class tabBarItemClass;

/** The animation used when changing selected tabBarItem, default: none */
@property (nonatomic, assign) NGTabBarControllerAnimation animation;
/** The duration of the used animation, only taken into account when animation is different from none */
@property (nonatomic, assign) NSTimeInterval animationDuration;

/** Sets the view controllers of the tab bar controller. */
- (void)setViewControllers:(NSArray *)viewControllers animated:(BOOL)animated;

/** The designated initializer. */
- (id)initWithDelegate:(id<NGTabBarControllerDelegate>)delegate;

@end