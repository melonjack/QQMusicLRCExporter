//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QMTableView, UIView;

@protocol QMTableViewProtocol <NSObject>

@optional
- (BOOL)canDeletetableFootView;
- (void)buildTableFootView;
- (void)tableView:(QMTableView *)arg1 hitView:(UIView *)arg2;
- (BOOL)moreDataIsLoading:(QMTableView *)arg1;
- (void)processingLoadMoreAction:(QMTableView *)arg1;
- (BOOL)hasMoreDataInTableView:(QMTableView *)arg1;
@end

