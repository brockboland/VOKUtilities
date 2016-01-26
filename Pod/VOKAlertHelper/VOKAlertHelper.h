//
//  VOKAlertHelper.h
//  VOKUtilities
//
//  Created by Rachel Hyman on 6/15/15.
//  Copyright (c) 2015 Vokal. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <VOKAlertAction.h>

typedef void(^VOKAlertHelperActionBlock)(void);

@interface VOKAlertHelper : NSObject

/**
 *  Displays an alert in the OS-appropriate fashion.
 *
 *  @param viewController View controller responsible for presenting the alert.
 *  @param title          Title for the alert.
 *  @param message        Message for the alert.
 *  @param buttons        Array of VOKAlertAction objects that correspond to button(s). Must have at least one object.
 */
+ (void)showAlertFromViewController:(UIViewController *)viewController
                          withTitle:(NSString *)title
                            message:(NSString *)message
                            buttons:(NSArray *)buttons;

@end
