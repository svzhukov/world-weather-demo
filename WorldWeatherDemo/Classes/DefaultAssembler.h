//
//  DefaultAssembler.h
//  WorldWeatherDemo
//
//  Created by Саша Жуков on 8/7/19.
//  Copyright © 2019 svzh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ModuleDelegate.h"
#import "ModuleAssembler.h"
#import "ModuleAssemblerFactory.h"

NS_ASSUME_NONNULL_BEGIN

@interface DefaultAssembler : NSObject

@property (nonatomic, readonly, strong) ModuleAssemblerFactory* factory;

- (void)assembleInitialModule;
- (void)assembleWithModuleType:(ModuleType)type
                      objectId:(NSString *)objectId
                      delegate:(id<ModuleDelegate>)delegate
                    completion:(void (^)(UIViewController *))completion;

@end

NS_ASSUME_NONNULL_END
