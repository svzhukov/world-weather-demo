//
//  DetailedWeatherVC.h
//  WorldWeatherDemo
//
//  Created by Саша Жуков on 07/08/2019.
//  Copyright © 2019 svzh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetailedWeatherOutput.h"
#import "DetailedWeatherInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface DetailedWeather : UIViewController <DetailedWeatherInterface>

@property (nonatomic, strong) id<DetailedWeatherOutput> output;

@end

NS_ASSUME_NONNULL_END
