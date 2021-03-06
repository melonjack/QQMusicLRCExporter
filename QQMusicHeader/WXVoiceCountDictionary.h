//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface WXVoiceCountDictionary : NSObject
{
    int _count;
    NSString *_key;
    NSMutableDictionary *_countDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *countDictionary; // @synthesize countDictionary=_countDictionary;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)saveCountDictionary;
- (void)clearCountDictionary;
- (void)loadCountDictionary;
- (id)stringForSend;
- (int)count;
- (void)changeCountDictionaryWithResultKind:(BOOL)arg1 andNetType:(int)arg2;
- (id)initWithUserDefaultsKey:(id)arg1;
- (void)dealloc;

@end

