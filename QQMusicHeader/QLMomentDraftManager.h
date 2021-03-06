//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QLMomentDraftManager : NSObject
{
    NSMutableDictionary *_draftDict;
    id <QLMomentDraftManagerDelegate><NSObject> _delegate;
}

+ (id)shareInstance:(id)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) id <QLMomentDraftManagerDelegate><NSObject> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *draftDict; // @synthesize draftDict=_draftDict;
- (void)initFromDisk;
- (void)flushToDisk;
- (id)getFilePath;
- (void)clearPublishDraftWithVid:(id)arg1 withCid:(id)arg2 withLid:(id)arg3 withPid:(id)arg4;
- (void)clearCommentDraft:(id)arg1;
- (id)getPublishDraftWithVid:(id)arg1 withCid:(id)arg2 withLid:(id)arg3 withPid:(id)arg4;
- (id)getCommentDraftWithMessageID:(id)arg1;
- (void)saveCommmentDraft:(id)arg1 withMessageID:(id)arg2;
- (void)savePublishDraft:(id)arg1 withVid:(id)arg2 withCid:(id)arg3 withLid:(id)arg4 withPid:(id)arg5;
- (id)getPublishKeyWithVid:(id)arg1 withCid:(id)arg2 withLid:(id)arg3 withPid:(id)arg4;
- (id)getCommentKeyWithID:(id)arg1;
- (id)init;

@end

