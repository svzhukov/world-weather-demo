//
//  CountriesPresenter.m
//  WorldWeatherDemo
//
//  Created by Саша Жуков on 8/7/19.
//  Copyright © 2019 svzh. All rights reserved.
//

#import "CountriesListPresenter.h"

@implementation CountriesListPresenter

- (void)didSelectObjectId:(NSString *)objectId {
    [self.assembler assembleDetailedWeatherWithDelegate:self completion:^(id<DetailedWeatherOutput>  _Nonnull output, id<DetailedWeatherInterface>  _Nonnull interface) {
        
    }];
}

@end
