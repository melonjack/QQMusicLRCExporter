//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface QMLogItem : NSObject
{
    NSString *_date;
    int _level;
    NSString *_file;
    int _line;
    NSString *_msg;
    NSString *_thread;
    NSDictionary *_extDict;
}

+ (id)getPathFileName:(id)arg1;
@property(retain, nonatomic) NSDictionary *extDict; // @synthesize extDict=_extDict;
@property(retain, nonatomic) NSString *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) int line; // @synthesize line=_line;
@property(retain, nonatomic) NSString *file; // @synthesize file=_file;
@property(nonatomic) int level; // @synthesize level=_level;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
- (id)outputString;
- (void)outputConsole;
- (id)outputExtDict;
- (void)dealloc;
- (id)init;
- (void)generateThreadInfo;
- (void)generateDate;

@end

