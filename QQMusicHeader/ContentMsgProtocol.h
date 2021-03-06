//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ContentMsgProtocol : ProtocolBaseJason
{
    NSMutableDictionary *_msgMutableDic;
    NSMutableArray *_temptToLogin;
    NSMutableArray *_guessLikeMsgs;
}

@property(retain) NSMutableArray *guessLikeMsgs; // @synthesize guessLikeMsgs=_guessLikeMsgs;
@property(retain) NSMutableArray *temptToLogin; // @synthesize temptToLogin=_temptToLogin;
@property(retain, nonatomic) NSMutableDictionary *msgMutableDic; // @synthesize msgMutableDic=_msgMutableDic;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (id)getGuessLikeMsgs;
- (id)getTemptToLogin;
@property(readonly, nonatomic) __weak NSDictionary *msgDic;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;
- (id)init;

@end

