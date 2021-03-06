//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtocolHostDelegate.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CommentLoader : NSObject <ProtocolHostDelegate>
{
    BOOL _hasMore;
    int _status;
    int _workResult;
    NSMutableArray *_commentList;
    NSString *_topic;
    int _pageinfolen;
    NSString *_pageinfobuf;
}

@property(retain, nonatomic) NSString *pageinfobuf; // @synthesize pageinfobuf=_pageinfobuf;
@property(nonatomic) int pageinfolen; // @synthesize pageinfolen=_pageinfolen;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) BOOL hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSMutableArray *commentList; // @synthesize commentList=_commentList;
@property(nonatomic) int workResult; // @synthesize workResult=_workResult;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)hostCallBackWithWorkProtocol:(id)arg1 Result:(int)arg2;
- (void)refreshFirstPage;
- (void)loadMoreData;
- (id)initWithTopic:(id)arg1;
- (void)dealloc;

@end

