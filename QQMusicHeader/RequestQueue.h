//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class NSArray, NSMutableArray, NSString;

@interface RequestQueue : NSObject <NSURLConnectionDataDelegate>
{
    BOOL _suspended;
    BOOL _allowDuplicateRequests;
    unsigned int _maxConcurrentRequestCount;
    int _queueMode;
    NSMutableArray *_operations;
}

+ (id)mainQueue;
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
@property(nonatomic) BOOL allowDuplicateRequests; // @synthesize allowDuplicateRequests=_allowDuplicateRequests;
@property(nonatomic) int queueMode; // @synthesize queueMode=_queueMode;
@property(nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property(nonatomic) unsigned int maxConcurrentRequestCount; // @synthesize maxConcurrentRequestCount=_maxConcurrentRequestCount;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancelAllRequests;
- (void)cancelRequest:(id)arg1;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addOperation:(id)arg1;
- (void)dequeueOperations;
@property(readonly, copy, nonatomic) NSArray *requests;
@property(readonly, nonatomic) unsigned int requestCount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
