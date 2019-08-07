//
//  ModuleInterface.h
//  WorldWeatherDemo
//
//  Created by Саша Жуков on 07/08/2019.
//  Copyright © 2019 svzh. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ModuleInterface <NSObject>

- (void)present:(id<ModuleInterface>)interface;

@end

NS_ASSUME_NONNULL_END
