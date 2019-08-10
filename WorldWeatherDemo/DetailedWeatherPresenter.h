//
//  DetailedWeatherPresenter.h
//  WorldWeatherDemo
//
//  Created by Саша Жуков on 07/08/2019.
//  Copyright © 2019 svzh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ModuleAssembler.h"
#import "DetailedWeatherOutput.h"
#import "DetailedWeatherDelegate.h"
#import "DetailedWeatherViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface DetailedWeatherPresenter : NSObject <DetailedWeatherOutput>

@property (nonatomic, weak) DetailedWeatherViewController *interface;
@property (nonatomic, weak) id<ModuleAssembler> assembler;
@property (nonatomic, weak) id<DetailedWeatherDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
