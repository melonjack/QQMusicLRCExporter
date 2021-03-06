//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class FeedCommentInfo, MusicCircleFeed;

__attribute__((visibility("hidden")))
@interface MusicCircleCommentProcotol : ProtocolBaseJason
{
    BOOL _bAddComent;
    BOOL _bRecomment;
    MusicCircleFeed *_feed;
    FeedCommentInfo *_comment;
    FeedCommentInfo *_lastCommentInfo;
}

@property(retain, nonatomic) FeedCommentInfo *lastCommentInfo; // @synthesize lastCommentInfo=_lastCommentInfo;
@property(retain, nonatomic) FeedCommentInfo *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) MusicCircleFeed *feed; // @synthesize feed=_feed;
@property(nonatomic) BOOL bRecomment; // @synthesize bRecomment=_bRecomment;
@property(nonatomic) BOOL bAddComent; // @synthesize bAddComent=_bAddComent;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUser;
- (id)getUrl;
- (int)cid;

@end

