//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ForMeProtocol : ProtocolBaseJason
{
    BOOL hasMore;
    BOOL _canEvaluate;
    unsigned long fristuin;
    unsigned long fristuintime;
    unsigned long lastuin;
    int frdindex;
    unsigned long lastuintime;
    NSArray *resultArray;
    int _nextFrdIndex;
    NSString *_picUrl;
    NSString *_descriptionStr;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL canEvaluate; // @synthesize canEvaluate=_canEvaluate;
@property(retain, nonatomic) NSString *descriptionStr; // @synthesize descriptionStr=_descriptionStr;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic) int nextFrdIndex; // @synthesize nextFrdIndex=_nextFrdIndex;
@property(nonatomic) BOOL hasMore; // @synthesize hasMore;
@property(retain, nonatomic) NSArray *resultArray; // @synthesize resultArray;
@property(nonatomic) unsigned long lastuintime; // @synthesize lastuintime;
@property(nonatomic) int frdindex; // @synthesize frdindex;
@property(nonatomic) unsigned long lastuin; // @synthesize lastuin;
@property(nonatomic) unsigned long fristuintime; // @synthesize fristuintime;
@property(nonatomic) unsigned long fristuin; // @synthesize fristuin;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUser;
- (id)getUrl;
- (int)cid;

@end
