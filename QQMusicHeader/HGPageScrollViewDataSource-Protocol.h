//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HGPageScrollView, HGPageView;

@protocol HGPageScrollViewDataSource <NSObject>
- (int)numberOfPagesInScrollView:(HGPageScrollView *)arg1;
- (HGPageView *)pageScrollView:(HGPageScrollView *)arg1 viewForPageAtIndex:(int)arg2;
@end
