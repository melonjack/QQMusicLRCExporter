//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface QLReportCtlMgr : NSObject
{
    NSObject<OS_dispatch_queue> *myQueue;
    NSMutableArray *reportQueue;
    BOOL _isCanceled;
    id <QLReportCtlMgrDataSource> _dataSource;
    id <QLMTADelegate> _mtaDelegate;
}

+ (void)reportWithOneTimeUse;
+ (void)setUseStartTime;
+ (void)reportNetworkDataError:(id)arg1;
+ (void)reportWithPage:(id)arg1 action:(id)arg2 params:(id)arg3;
+ (int)getPlatformByReportType:(int)arg1;
+ (void)report:(int)arg1 params:(id)arg2;
+ (id)sharedInstance;
@property id <QLMTADelegate> mtaDelegate; // @synthesize mtaDelegate=_mtaDelegate;
@property(readonly) id <QLReportCtlMgrDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property BOOL isCanceled; // @synthesize isCanceled=_isCanceled;
- (id)dispatchQueue;
- (void)bkgReporter;
- (void)addToQueue:(id)arg1;
- (void)report:(id)arg1;
- (void)setCustomerUserID:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)resetSharedReportManager;

@end
