//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TemptToLoginTip : NSObject
{
    NSString *_message;
    NSString *_url;
    int _tipId;
}

+ (void)saveTipsToFile:(id)arg1;
+ (id)loadTipsFromFile;
+ (id)toDictionary:(id)arg1;
+ (id)randomTipFromTips:(id)arg1 lastShowedId:(int)arg2;
+ (id)removeBadTypeObject:(id)arg1;
+ (id)randomTip;
+ (id)defaultTip;
@property int tipId; // @synthesize tipId=_tipId;
@property(retain) NSString *url; // @synthesize url=_url;
@property(retain) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1 url:(id)arg2 tipId:(int)arg3;

@end
