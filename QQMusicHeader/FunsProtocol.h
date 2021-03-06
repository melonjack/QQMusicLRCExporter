//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface FunsProtocol : ProtocolBaseJason
{
    NSArray *fansList;
    int totalnum;
    int type;
    long long uin;
    struct _NSRange range;
}

@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) int totalnum; // @synthesize totalnum;
@property(nonatomic) struct _NSRange range; // @synthesize range;
@property(nonatomic) long long uin; // @synthesize uin;
@property(retain, nonatomic) NSArray *fansList; // @synthesize fansList;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (BOOL)canReportError;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;
- (id)initWithUin:(long long)arg1 type:(int)arg2 range:(struct _NSRange)arg3;

@end

