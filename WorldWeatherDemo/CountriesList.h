//
//  CountriesTableViewController.h
//  WorldWeatherDemo
//
//  Created by Саша Жуков on 8/7/19.
//  Copyright © 2019 svzh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CountriesListUIOutput.h"
#import "CountriesListInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface CountriesList : UITableViewController <CountriesListInterface>

@property (nonatomic, strong) id<CountriesListUIOutput> output;

@end

NS_ASSUME_NONNULL_END
