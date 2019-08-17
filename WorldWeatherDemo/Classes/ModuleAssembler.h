//
//  ModuleAssembler.h
//  WorldWeatherDemo
//
//  Created by Саша Жуков on 8/7/19.
//  Copyright © 2019 svzh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseRouter.h"
#import "ModuleDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@protocol ModuleAssembler <NSObject>

- (BaseRouter *)assembleWithObjectId:(nullable NSString *)objectId
                            delegate:(nullable id<ModuleDelegate>)delegate;

@optional
- (BaseRouter *)assembleAsInitialModule;

@end

NS_ASSUME_NONNULL_END
