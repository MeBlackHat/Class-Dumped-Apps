//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/WAPaymentImageTableViewCell.h>

@class NSString;

@interface WAPaymentAccountTableViewCell : WAPaymentImageTableViewCell
{
    NSString *_iconURLString;
}

- (void).cxx_destruct;
- (void)fetchAndUpdateImageFromURL:(id)arg1 logoStorage:(id)arg2;
- (void)updateCellWithTitleText:(id)arg1 headerText:(id)arg2 subtitleText:(id)arg3 detailText:(id)arg4 subtitleCustomCopySelector:(SEL)arg5 accountType:(int)arg6 iconURLString:(id)arg7 compressedImageSize:(_Bool)arg8;
- (void)updateCellWithTitleText:(id)arg1 headerText:(id)arg2 subtitleText:(id)arg3 detailText:(id)arg4 subtitleCustomCopySelector:(SEL)arg5 accountType:(int)arg6 iconURLString:(id)arg7;
- (id)initWithPaymentAccount:(id)arg1 headerText:(id)arg2 subtitleOverride:(id)arg3 subtitleCustomCopySelector:(SEL)arg4 reusableIdentifier:(id)arg5;
- (id)initWithPrimaryTitle:(id)arg1 headerText:(id)arg2 subtitle:(id)arg3 detailText:(id)arg4 subtitleCustomCopySelector:(SEL)arg5 accountType:(int)arg6 iconURLString:(id)arg7 reusableIdentifier:(id)arg8;

@end

