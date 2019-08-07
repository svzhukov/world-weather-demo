//
//  CountriesTableViewControllerOutput.h
//  WorldWeatherDemo
//
//  Created by Саша Жуков on 8/7/19.
//  Copyright © 2019 svzh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ModuleOutput.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CountriesListUIOutput <NSObject, ModuleOutput>

- (void)didSelectObjectId:(NSString *)objectId;

@end

NS_ASSUME_NONNULL_END
