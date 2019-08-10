//
//  ModuleAssembler.h
//  WorldWeatherDemo
//
//  Created by Саша Жуков on 8/7/19.
//  Copyright © 2019 svzh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DetailedWeatherDelegate.h"
#import "DetailedWeatherOutput.h"
#import "DetailedWeatherViewController.h"

NS_ASSUME_NONNULL_BEGIN

@protocol ModuleAssembler <NSObject>

- (void)assembleAsInitialModule
- (void)assembleDetailedWeatherWithDelegate:(id<DetailedWeatherDelegate>)delegate completion:(void (^)(DetailedWeatherViewController *))completion;

@end

NS_ASSUME_NONNULL_END
