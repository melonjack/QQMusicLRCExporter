//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition;

__attribute__((visibility("hidden")))
@interface MCCountingCondition : NSObject
{
    NSCondition *_condition;
    unsigned int _counter;
}

- (void).cxx_destruct;
- (void)waitForZero;
- (void)decrement;
- (void)increment;
- (id)initWithCount:(unsigned int)arg1;
- (id)init;

@end

