//
//  WebWrapperView.h
//  candpwrapperapp
//
//  Created by David Mojdehi on 8/30/11.
//  Copyright 2011 Coffee and Power LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebWrapperView : UIViewController< UIWebViewDelegate >
{
	IBOutlet UIWebView *mWebkitView;
	
}

@end