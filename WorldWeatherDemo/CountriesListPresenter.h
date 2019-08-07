//
//  CountriesPresenter.h
//  WorldWeatherDemo
//
//  Created by Саша Жуков on 8/7/19.
//  Copyright © 2019 svzh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CountriesListUIOutput.h"
#import "CountriesListInterface.h"
#import "ModuleAssembler.h"
#import "DetailedWeatherDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface CountriesListPresenter : NSObject <CountriesListUIOutput, DetailedWeatherDelegate>

@property (nonatomic, weak) id<CountriesListInterface> interface;
@property (nonatomic, weak) id<ModuleAssembler> assembler;

@end

NS_ASSUME_NONNULL_END
