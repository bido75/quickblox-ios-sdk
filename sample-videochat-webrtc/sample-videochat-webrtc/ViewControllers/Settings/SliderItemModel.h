//
//  SliderItemModel.h
//  sample-videochat-webrtc
//
//  Created by Andrey Ivanov on 30/09/15.
//  Copyright © 2015 QuickBlox Team. All rights reserved.
//

#import "BaseItemModel.h"

@interface SliderItemModel : BaseItemModel

- (instancetype)initWithTitle:(NSString * )title minValue:(NSUInteger)minValue maxValue:(NSUInteger)maxValue currentValue:(NSUInteger)currentValue;
- (instancetype)initWithMinValue:(NSUInteger)minValue maxValue:(NSUInteger)maxValue currentValue:(NSUInteger)currentValue;

@property (nonatomic, copy) NSString *minLabel;
@property (nonatomic, copy) NSString *maxLabel;

@property (assign, nonatomic) NSUInteger maxValue;
@property (assign, nonatomic) NSUInteger currentValue;
@property (assign, nonatomic) NSUInteger minValue;

@end
