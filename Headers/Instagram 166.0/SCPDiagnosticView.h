//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCPDiagnosticData;

@interface SCPDiagnosticView : UIView
{
    SCPDiagnosticData *_diagnosticData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCPDiagnosticData *diagnosticData; // @synthesize diagnosticData=_diagnosticData;
- (void)drawText:(id)arg1;
- (void)drawSegment:(id)arg1;
- (void)drawPoint:(id)arg1;
- (void)drawPolygon:(id)arg1;
- (void)drawImageAnnotation:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setupWithDiagnosticData:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

