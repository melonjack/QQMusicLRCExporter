//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIImageView;

__attribute__((visibility("hidden")))
@interface UIViewPreparing : UIView
{
    UIImageView *imageViewGreen1;
    UIImageView *imageViewGreen2;
    UIImageView *imageViewGreen3;
    UIImageView *imageViewGray1;
    UIImageView *imageViewGray2;
    UIImageView *imageViewGray3;
    int iStatus;
    NSTimer *timer;
}

- (void).cxx_destruct;
- (void)setNextStatus;
- (void)dealloc;
- (void)beginAnimate;
- (id)initWithFrame:(struct CGRect)arg1;

@end

