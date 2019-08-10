//
//  DefaultAssembler.m
//  WorldWeatherDemo
//
//  Created by Саша Жуков on 8/7/19.
//  Copyright © 2019 svzh. All rights reserved.
//

#import "DefaultAssembler.h"

@implementation DefaultAssembler

- (instancetype)defaultAssembler {
    static DefaultAssembler *assembler;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        assembler = [DefaultAssembler new];
    });
    return self;
}

- (void)assembleInitialModule {
    id<ModuleAssembler> assembler = [self.factory assemblerWithModuleType:INITIAL_MODULE];
    [assembler assembleAsInitialModule];
}

- (void)assembleWithModuleType:(ModuleType)type objectId:(NSString *)objectId delegate:(id<ModuleDelegate>)delegate completion:(void (^)(UIViewController * _Nonnull))completion {

}

- (void)assembleDetailedWeatherWithDelegate:(id<DetailedWeatherDelegate>)delegate completion:(void (^)(id<DetailedWeatherOutput> _Nonnull, id<DetailedWeatherInterface> _Nonnull))completion {
    
    DetailedWeatherPresenter *presenter = [DetailedWeatherPresenter new];
    DetailedWeatherViewController *interface = [DetailedWeatherViewController new];
    presenter.interface = interface;
    presenter.delegate = delegate;
    interface.output = presenter;
    completion(presenter, interface);
}

@end
