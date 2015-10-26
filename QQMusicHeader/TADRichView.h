//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"
#import "TADURLRequestLoading.h"

@class NSDictionary, NSMutableArray, NSMutableData, NSString, NSURLConnection, NSURLRequest, UIButton, UILabel, UIScrollView;

@interface TADRichView : UIView <NSURLConnectionDelegate, NSURLConnectionDataDelegate, TADURLRequestLoading>
{
    BOOL _isLoading;
    id <TADRichViewDelegate> _delegate;
    NSURLRequest *_request;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_headLabel;
    NSMutableArray *_bodyPool;
    UIButton *_moreButton;
    NSDictionary *_richDict;
    NSMutableData *_richData;
    NSURLConnection *_richConnection;
}

@property(retain, nonatomic) NSURLConnection *richConnection; // @synthesize richConnection=_richConnection;
@property(retain, nonatomic) NSMutableData *richData; // @synthesize richData=_richData;
@property(retain, nonatomic) NSDictionary *richDict; // @synthesize richDict=_richDict;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) NSMutableArray *bodyPool; // @synthesize bodyPool=_bodyPool;
@property(retain, nonatomic) UILabel *headLabel; // @synthesize headLabel=_headLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) id <TADRichViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invokeDelegateBlock:(CDUnknownBlockType)arg1;
- (void)reload;
- (void)stopLoading;
- (void)loadRequest:(id)arg1;
- (void)loadRichDictFinished:(id)arg1;
- (void)downloadRichDataFinished:(id)arg1;
- (void)parseRichDataError:(id)arg1;
- (void)downloadRichDataFailed;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)moreButtonClicked;
- (id)safeDictValue:(id)arg1 OfType:(Class)arg2 forKey:(id)arg3;
- (void)addMoreButton:(id)arg1;
- (void)addImageView:(id)arg1 withURL:(id)arg2 placeholderImage:(id)arg3;
- (void)addTextLabel:(id)arg1 withContent:(id)arg2;
- (void)addHeadLabel:(id)arg1 withContent:(id)arg2;
- (void)renderWithRichDict:(id)arg1;
- (void)layoutSubviews;
- (id)textLabel:(unsigned int)arg1;
- (id)imageView:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *title;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
