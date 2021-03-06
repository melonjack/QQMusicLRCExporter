//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChannelCreator.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FeedCommentInfo : ChannelCreator
{
    NSString *commentId;
    ChannelCreator *commentUser;
    NSString *msg;
    int operateState;
    ChannelCreator *_replayCommentUser;
    NSString *_tmpCommentMsg;
    double timetag;
}

+ (id)translateFromJsonData:(id)arg1;
@property(retain, nonatomic) NSString *tmpCommentMsg; // @synthesize tmpCommentMsg=_tmpCommentMsg;
@property(retain, nonatomic) ChannelCreator *replayCommentUser; // @synthesize replayCommentUser=_replayCommentUser;
@property(nonatomic) int operateState; // @synthesize operateState;
@property(nonatomic) double timetag; // @synthesize timetag;
@property(retain, nonatomic) NSString *msg; // @synthesize msg;
@property(retain, nonatomic) ChannelCreator *commentUser; // @synthesize commentUser;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId;
- (void).cxx_destruct;
- (BOOL)isEqualContent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;

@end

