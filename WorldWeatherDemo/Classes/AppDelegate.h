//
//  AppDelegate.h
//  WorldWeatherDemo
//
//  Created by Саша Жуков on 8/7/19.
//  Copyright © 2019 svzh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

