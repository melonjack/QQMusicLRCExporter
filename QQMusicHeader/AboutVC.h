//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, NSURL, UIWebView;

__attribute__((visibility("hidden")))
@interface AboutVC : SkinViewController <UIWebViewDelegate>
{
    UIWebView *aboutWebView;
    NSURL *url;
    BOOL bEnableWebView;
    BOOL bScalesPageToFit;
    NSString *urlHost;
    id callback;
    SEL callbackFunc;
    BOOL showNetLoading;
    BOOL showNetErr;
    NSString *_htmlStr;
}

@property(nonatomic) __weak NSString *htmlStr; // @synthesize htmlStr=_htmlStr;
@property(retain, nonatomic) UIWebView *aboutWebView; // @synthesize aboutWebView;
@property(nonatomic) BOOL showNetErr; // @synthesize showNetErr;
@property(nonatomic) BOOL showNetLoading; // @synthesize showNetLoading;
@property(nonatomic) SEL callbackFunc; // @synthesize callbackFunc;
@property(retain, nonatomic) NSString *urlHost; // @synthesize urlHost;
@property(nonatomic) __weak id callback; // @synthesize callback;
@property(nonatomic) BOOL bScalesPageToFit; // @synthesize bScalesPageToFit;
@property(nonatomic) BOOL bEnableWebView; // @synthesize bEnableWebView;
@property(retain, nonatomic) NSURL *url; // @synthesize url;
- (void).cxx_destruct;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)reFresh;
- (id)getBgName;
- (void)dealloc;
- (void)back:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (void)miniPlayerViewDidChanged:(float)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

