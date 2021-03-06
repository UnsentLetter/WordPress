//
//  AppDelegate.h
//  WordPress
//
//  Created by Jun Tao Luo on 2012-08-20.
//  Copyright (c) 2012 Jun Tao Luo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, assign) BOOL isWPcomAuthenticated;

+ (AppDelegate *)sharedWordPressApp;

- (void)registerForPushNotifications;
- (void)unregisterApnsToken;
- (void)showAlertWithTitle:(NSString *)title message:(NSString *)message;

@end
