//
//  DefaultAssembler.m
//  WorldWeatherDemo
//
//  Created by Саша Жуков on 8/7/19.
//  Copyright © 2019 svzh. All rights reserved.
//

#import "DefaultAssembler.h"
#import "CountriesListPresenter.h"
#import "CountriesList.h"

#import "DetailedWeather.h"
#import "DetailedWeatherPresenter.h"

@implementation DefaultAssembler

- (void)assembleInitialModule {
    CountriesListPresenter *presenter = [CountriesListPresenter new];
    CountriesList *interface = (CountriesList *)[self rootVC];
    presenter.interface = interface;
    interface.output = presenter;
}

- (void)assembleDetailedWeather {
    DetailedWeatherPresenter *presenter = [DetailedWeatherPresenter new];
    DetailedWeather *interface = [DetailedWeather new];
    presenter.interface = interface;
    interface.output = presenter;
    
    
}

- (UIViewController *)rootVC {
    return [[[UIApplication sharedApplication] keyWindow] rootViewController];
}

@end
