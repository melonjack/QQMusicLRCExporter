//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKStoreProductViewController.h"

@class UIActivityIndicatorView;

@interface TADStoreViewController : SKStoreProductViewController
{
    BOOL _loadFinished;
    UIActivityIndicatorView *_loadingView;
}

@property(nonatomic) BOOL loadFinished; // @synthesize loadFinished=_loadFinished;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)stopAnimateLoading;
- (void)startAnimateLoading;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotate;
- (id)init;

@end

