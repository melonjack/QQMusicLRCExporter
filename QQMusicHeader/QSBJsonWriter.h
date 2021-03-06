//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QSBJsonBase.h"

@interface QSBJsonWriter : QSBJsonBase
{
    BOOL sortKeys;
    BOOL humanReadable;
}

+ (void)initialize;
@property BOOL humanReadable; // @synthesize humanReadable;
@property BOOL sortKeys; // @synthesize sortKeys;
- (BOOL)appendString:(id)arg1 into:(id)arg2;
- (BOOL)appendDictionary:(id)arg1 into:(id)arg2;
- (BOOL)appendArray:(id)arg1 into:(id)arg2;
- (BOOL)appendValue:(id)arg1 into:(id)arg2;
- (id)indent;
- (id)stringWithObject:(id)arg1 error:(id *)arg2;
- (id)stringWithObject:(id)arg1;

@end

