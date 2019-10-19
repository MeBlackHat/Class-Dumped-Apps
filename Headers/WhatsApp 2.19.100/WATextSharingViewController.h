//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "UITextViewDelegate-Protocol.h"
#import "WAWebPageFromTextLoaderDelegate-Protocol.h"
#import "WAWebURLPreviewViewDelegate-Protocol.h"

@class NSString, UIBarButtonItem, WADoneWithSpinnerBarButtonItem, WARecipientNameView, WATextView, WAWebPageFromTextLoader, WAWebURLPreviewView;
@protocol WATextSharingViewControllerDelegate;

@interface WATextSharingViewController : WAViewController <WAWebPageFromTextLoaderDelegate, UITextViewDelegate, WAWebURLPreviewViewDelegate>
{
    NSString *_initialText;
    NSString *_recipientName;
    WAWebPageFromTextLoader *_webPageLoader;
    WAWebURLPreviewView *_webURLPreview;
    WADoneWithSpinnerBarButtonItem *_sendButton;
    UIBarButtonItem *_cancelButton;
    WATextView *_textView;
    double _keyboardHeight;
    WARecipientNameView *_recipientView;
    _Bool _didClear;
    id <WATextSharingViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WATextSharingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
@property(nonatomic, getter=isSpinnerHidden) _Bool spinnerHidden;
- (void)keyboardDidChangeLayout:(id)arg1;
- (void)webURLPreviewViewDidEditMedia:(id)arg1;
- (void)webURLPreviewViewDidCancelMediaDownload:(id)arg1;
- (void)webURLPreviewViewDidRequestMediaDownload:(id)arg1;
- (void)webURLPreviewViewDidDismiss:(id)arg1;
- (void)webPageFromTextLoaderDidUpdateMatchedText:(id)arg1;
- (void)webPageFromTextLoaderDidUpdateMetadata:(id)arg1;
- (void)sendButtonTapped:(id)arg1;
- (void)cancel:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithInitialText:(id)arg1 recipientName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

