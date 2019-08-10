//
//  CountriesTableViewControllerOutput.h
//  WorldWeatherDemo
//
//  Created by Саша Жуков on 8/7/19.
//  Copyright © 2019 svzh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "InterfaceOutput.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CountriesListUIOutput <NSObject, InterfaceOutput>

- (void)didSelectObjectId:(NSString *)objectId;

- (void)presentWithData:(id)data;

@end

NS_ASSUME_NONNULL_END
