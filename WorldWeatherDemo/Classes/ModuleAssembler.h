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
#import "DetailedWeatherInterface.h"

NS_ASSUME_NONNULL_BEGIN

@protocol ModuleAssembler <NSObject>

- (void)assembleInitialModule;
- (void)assembleDetailedWeatherWithDelegate:(id<DetailedWeatherDelegate>)delegate completion:(void (^)(id<DetailedWeatherOutput> output, id<DetailedWeatherInterface> interface))completion;

@end

//-(void)unregisterAppOnAmoJoWithSuccess:(void (^)(id data))successBlock
//failure:(void (^)(NSError *error))failureBlock;

NS_ASSUME_NONNULL_END
