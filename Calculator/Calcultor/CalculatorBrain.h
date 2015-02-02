//
//  CalculatorBrain.h
//  Calcultor
//
//  Created by Herman on 1/29/15.
//  Copyright (c) 2015 XiaozhengHe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@end
