// -----------------------------------------------------------------------------------
// http://wowslider.com/
// JavaScript Wow Slider is a free software that helps you easily generate delicious 
// slideshows with gorgeous transition effects, in a few clicks without writing a single line of code.
// Generated by WOW Slider 4.8
//
//***********************************************
// Obfuscated by Javascript Obfuscator
// http://javascript-source.com
//***********************************************
function ws_basic_linear(c,a,b){var d=jQuery;var e=d("<div></div>").css({position:"absolute",display:"none","z-index":2,width:"200%",height:"100%"}).appendTo(b);this.go=function(f,j){e.stop(1,1);var g=(!!((f-j+1)%a.length)^c.revers?"left":"right");d(a[j]).clone().css({position:"absolute",left:"auto",right:"auto",top:0,width:"50%"}).appendTo(e).css(g,0);d(a[f]).clone().css({position:"absolute",left:"auto",right:"auto",top:0,width:"50%"}).appendTo(e).css(g,"50%").show();e.css({left:"auto",right:"auto",top:0}).css(g,0).show();var h=b.find("ul").hide();var i={};i[g]="-100%";e.animate(i,c.duration,"easeInOutExpo",function(){h.css({left:-f+"00%"}).show();d(this).hide().html("")});return f}};// -----------------------------------------------------------------------------------
// http://wowslider.com/
// JavaScript Wow Slider is a free software that helps you easily generate delicious 
// slideshows with gorgeous transition effects, in a few clicks without writing a single line of code.
// Generated by WOW Slider 4.8
//
//***********************************************
// Obfuscated by Javascript Obfuscator
// http://javascript-source.com
//***********************************************
jQuery("#wowslider-container1").wowSlider({effect:"basic_linear",prev:"",next:"",duration:20*100,delay:20*100,width:960,height:720,autoPlay:false,playPause:false,stopOnHover:false,loop:false,bullets:0,caption:false,captionEffect:"slide",controls:true,onBeforeStep:0,images:[{src:"./troubleshooting_windows_7_installation_page_1.jpg",title:"troubleshooting_windows_7_installation_Page_1"%6},{src:"./troubleshooting_windows_7_installation_page_2.jpg",title:"troubleshooting_windows_7_installation_Page_2"%6},{src:"./troubleshooting_windows_7_installation_page_3.jpg",title:"troubleshooting_windows_7_installation_Page_3"%6},{src:"./troubleshooting_windows_7_installation_page_4.jpg",title:"troubleshooting_windows_7_installation_Page_4"%6},{src:"./troubleshooting_windows_7_installation_page_5.jpg",title:"troubleshooting_windows_7_installation_Page_5"%6},{src:"./troubleshooting_windows_7_installation_page_6.jpg",title:"troubleshooting_windows_7_installation_Page_6"%6},{src:"./troubleshooting_windows_7_installation_page_7.jpg",title:"troubleshooting_windows_7_installation_Page_7"%6},{src:"./troubleshooting_windows_7_installation_page_8.jpg",title:"troubleshooting_windows_7_installation_Page_8"%6},{src:"./troubleshooting_windows_7_installation_page_9.jpg",title:"troubleshooting_windows_7_installation_Page_9"%6}]});