//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QMMetroView, UIImage;

@protocol QMMetroViewDataSource <NSObject>
- (NSString *)QMMetroView:(QMMetroView *)arg1 titleForItemAtIndex:(int)arg2;
- (UIImage *)QMMetroView:(QMMetroView *)arg1 titleBgImageForItemAtIndex:(int)arg2;
- (UIImage *)QMMetroView:(QMMetroView *)arg1 playIconForItemAtIndex:(int)arg2;
- (UIImage *)QMMetroView:(QMMetroView *)arg1 iconForItemAtIndex:(int)arg2;
- (UIImage *)QMMetroView:(QMMetroView *)arg1 imageForItemAtIndex:(int)arg2;
- (int)numberOfItemsInQMMetroView:(QMMetroView *)arg1;

@optional
- (BOOL)QMMetroView:(QMMetroView *)arg1 canMoveItemAtIndex:(int)arg2;
- (BOOL)QMMetroView:(QMMetroView *)arg1 canDeleteItemAtIndex:(int)arg2;
@end

