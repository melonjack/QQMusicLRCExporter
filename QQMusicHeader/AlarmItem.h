//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface AlarmItem : NSObject
{
    NSString *_name;
    NSDate *_originDate;
    NSDate *_answerDate;
}

+ (id)getDicFromAlarmItem:(id)arg1;
+ (id)getAlarmItemFromDic:(id)arg1;
@property(retain, nonatomic) NSDate *answerDate; // @synthesize answerDate=_answerDate;
@property(retain, nonatomic) NSDate *originDate; // @synthesize originDate=_originDate;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;

@end

