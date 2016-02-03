{
	"patcher" : 	{
		"fileversion" : 1,
		"appversion" : 		{
			"major" : 7,
			"minor" : 1,
			"revision" : 0,
			"architecture" : "x86",
			"modernui" : 1
		}
,
		"rect" : [ 109.0, 154.0, 1090.0, 750.0 ],
		"bglocked" : 0,
		"openinpresentation" : 0,
		"default_fontsize" : 12.0,
		"default_fontface" : 0,
		"default_fontname" : "Arial",
		"gridonopen" : 1,
		"gridsize" : [ 15.0, 15.0 ],
		"gridsnaponopen" : 1,
		"objectsnaponopen" : 1,
		"statusbarvisible" : 2,
		"toolbarvisible" : 1,
		"lefttoolbarpinned" : 0,
		"toptoolbarpinned" : 0,
		"righttoolbarpinned" : 0,
		"bottomtoolbarpinned" : 0,
		"toolbars_unpinned_last_save" : 0,
		"tallnewobj" : 0,
		"boxanimatetime" : 200,
		"enablehscroll" : 1,
		"enablevscroll" : 1,
		"devicewidth" : 0.0,
		"description" : "",
		"digest" : "",
		"tags" : "",
		"style" : "",
		"subpatcher_template" : "",
		"boxes" : [ 			{
				"box" : 				{
					"id" : "obj-40",
					"linecount" : 4,
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 504.0, 555.0, 168.0, 60.0 ],
					"style" : "",
					"text" : "these are jit.pwindow objects -- you could also use jit.window, vizzie projectr, or vizzie viewr"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-38",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"patching_rect" : [ 678.0, 176.0, 24.0, 24.0 ],
					"style" : ""
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-36",
					"linecount" : 3,
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 722.0, 168.0, 177.0, 47.0 ],
					"presentation_rect" : [ 802.0, 108.0, 0.0, 0.0 ],
					"style" : "",
					"text" : "this is how you'd only play the video for, in this case, 2 seconds (2000ms)"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-33",
					"linecount" : 6,
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 406.0, 154.0, 177.0, 87.0 ],
					"presentation_rect" : [ 778.0, 276.0, 0.0, 0.0 ],
					"style" : "",
					"text" : "this is the jit.playlist object --\nyou can send it a number and it'll play that clip from start to finish (or you can click the little loop thing next to the play button to loop videos)"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-32",
					"linecount" : 6,
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 110.0, 460.0, 177.0, 87.0 ],
					"presentation_rect" : [ 115.0, 450.5, 0.0, 0.0 ],
					"style" : "",
					"text" : "since arduino spits out a new number every 10ms, you only want to get the numbers if they CHANGE (you don't want a thousand 2's in a row, for example)"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-29",
					"linecount" : 2,
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 103.0, 320.5, 163.0, 33.0 ],
					"presentation_rect" : [ 118.0, 284.0, 0.0, 0.0 ],
					"style" : "",
					"text" : "some basic math to turn the number into 1-3"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-28",
					"linecount" : 3,
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 80.0, 82.0, 159.0, 47.0 ],
					"style" : "",
					"text" : "this would be coming from the \"serial\" object (from the arduino / FSR)"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-25",
					"maxclass" : "jit.pwindow",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "" ],
					"patching_rect" : [ 612.0, 460.0, 80.0, 60.0 ],
					"presentation_rect" : [ 612.0, 463.0, 0.0, 0.0 ]
				}

			}
, 			{
				"box" : 				{
					"clipheight" : 29.666666,
					"data" : 					{
						"clips" : [ 							{
								"filename" : "/Volumes/MCE 1TB OptiBay/RISD/assets-video/random-phjpg/Estee Lauder.mov",
								"filekind" : "moviefile",
								"loop" : 0,
								"content_state" : 								{
									"outputmode" : [ 1 ],
									"out_name" : [ "u701001998" ],
									"dim" : [ 1, 1 ],
									"adapt" : [ 1 ],
									"moviefile" : [ "" ],
									"dstrect" : [ 0, 0, 1, 1 ],
									"srcrect" : [ 0, 0, 1, 1 ],
									"position" : [ 0.0 ],
									"vol" : [ 1.0 ],
									"unique" : [ 0 ],
									"automatic" : [ 0 ],
									"engine" : [ "avf" ],
									"rate" : [ 1.0 ],
									"texture_name" : [ "u270001996" ],
									"autostart" : [ 1 ],
									"loopend" : [ 0 ],
									"drawto" : [ "" ],
									"loopreport" : [ 0 ],
									"time" : [ 0 ],
									"usedstrect" : [ 0 ],
									"looppoints" : [ 0, 0 ],
									"framereport" : [ 0 ],
									"usesrcrect" : [ 0 ],
									"loopstart" : [ 0 ],
									"time_secs" : [ 0.0 ],
									"interp" : [ 0 ],
									"colormode" : [ "argb" ],
									"output_texture" : [ 0 ]
								}

							}
, 							{
								"filename" : "/Volumes/MCE 1TB OptiBay/RISD/assets-video/random-phjpg/bears.mov",
								"filekind" : "moviefile",
								"loop" : 0,
								"content_state" : 								{
									"outputmode" : [ 1 ],
									"out_name" : [ "u701001998" ],
									"dim" : [ 1, 1 ],
									"adapt" : [ 1 ],
									"moviefile" : [ "" ],
									"dstrect" : [ 0, 0, 1, 1 ],
									"srcrect" : [ 0, 0, 1, 1 ],
									"position" : [ 0.0 ],
									"vol" : [ 1.0 ],
									"unique" : [ 0 ],
									"automatic" : [ 0 ],
									"engine" : [ "avf" ],
									"rate" : [ 1.0 ],
									"texture_name" : [ "u270001996" ],
									"autostart" : [ 1 ],
									"loopend" : [ 0 ],
									"drawto" : [ "" ],
									"loopreport" : [ 0 ],
									"time" : [ 0 ],
									"usedstrect" : [ 0 ],
									"looppoints" : [ 0, 0 ],
									"framereport" : [ 0 ],
									"usesrcrect" : [ 0 ],
									"loopstart" : [ 0 ],
									"time_secs" : [ 0.0 ],
									"interp" : [ 0 ],
									"colormode" : [ "argb" ],
									"output_texture" : [ 0 ]
								}

							}
, 							{
								"filename" : "/Volumes/MCE 1TB OptiBay/RISD/assets-video/random-phjpg/-Serpentine Dance- by the Lumière brothers.mov",
								"filekind" : "moviefile",
								"loop" : 0,
								"content_state" : 								{
									"outputmode" : [ 1 ],
									"out_name" : [ "u701001998" ],
									"dim" : [ 1, 1 ],
									"adapt" : [ 1 ],
									"moviefile" : [ "" ],
									"dstrect" : [ 0, 0, 1, 1 ],
									"srcrect" : [ 0, 0, 1, 1 ],
									"position" : [ 0.0 ],
									"vol" : [ 1.0 ],
									"unique" : [ 0 ],
									"automatic" : [ 0 ],
									"engine" : [ "avf" ],
									"rate" : [ 1.0 ],
									"texture_name" : [ "u270001996" ],
									"autostart" : [ 1 ],
									"loopend" : [ 0 ],
									"drawto" : [ "" ],
									"loopreport" : [ 0 ],
									"time" : [ 0 ],
									"usedstrect" : [ 0 ],
									"looppoints" : [ 0, 0 ],
									"framereport" : [ 0 ],
									"usesrcrect" : [ 0 ],
									"loopstart" : [ 0 ],
									"time_secs" : [ 0.0 ],
									"interp" : [ 0 ],
									"colormode" : [ "argb" ],
									"output_texture" : [ 0 ]
								}

							}
 ]
					}
,
					"id" : "obj-26",
					"maxclass" : "jit.playlist",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "jit_matrix", "", "dictionary" ],
					"patching_rect" : [ 612.0, 275.0, 150.0, 92.0 ],
					"presentation_rect" : [ 612.0, 278.0, 0.0, 0.0 ],
					"style" : ""
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-24",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 617.0, 193.0, 33.0, 22.0 ],
					"style" : "",
					"text" : "play"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-21",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"patching_rect" : [ 660.0, 70.0, 24.0, 24.0 ],
					"style" : ""
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-19",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 678.0, 228.0, 43.0, 22.0 ],
					"style" : "",
					"text" : "pause"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-17",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"patching_rect" : [ 678.0, 133.0, 69.0, 22.0 ],
					"style" : "",
					"text" : "delay 2000"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-16",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 49.0, 563.0, 93.0, 22.0 ],
					"style" : "",
					"text" : "print @popup 1"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-12",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "", "int", "int" ],
					"patching_rect" : [ 49.0, 460.0, 50.0, 22.0 ],
					"style" : "",
					"text" : "change"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-11",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "int" ],
					"patching_rect" : [ 49.0, 368.0, 29.5, 22.0 ],
					"style" : "",
					"text" : "+ 1"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-13",
					"maxclass" : "number",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 49.0, 416.0, 50.0, 22.0 ],
					"style" : ""
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-9",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "float" ],
					"patching_rect" : [ 49.0, 326.0, 29.5, 22.0 ],
					"style" : "",
					"text" : "* 3."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-8",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "float" ],
					"patching_rect" : [ 49.0, 282.0, 47.0, 22.0 ],
					"style" : "",
					"text" : "/ 1023."
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-10",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 49.0, 240.0, 50.0, 22.0 ],
					"style" : ""
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-5",
					"maxclass" : "slider",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 48.0, 74.0, 20.0, 140.0 ],
					"size" : 1023.0,
					"style" : ""
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-2",
					"maxclass" : "jit.pwindow",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "" ],
					"patching_rect" : [ 414.0, 460.0, 80.0, 60.0 ]
				}

			}
, 			{
				"box" : 				{
					"clipheight" : 29.666666,
					"data" : 					{
						"clips" : [ 							{
								"filename" : "/Volumes/MCE 1TB OptiBay/RISD/assets-video/random-phjpg/Estee Lauder.mov",
								"filekind" : "moviefile",
								"loop" : 0,
								"content_state" : 								{
									"outputmode" : [ 1 ],
									"out_name" : [ "u701001998" ],
									"dim" : [ 1, 1 ],
									"adapt" : [ 1 ],
									"moviefile" : [ "" ],
									"dstrect" : [ 0, 0, 1, 1 ],
									"srcrect" : [ 0, 0, 1, 1 ],
									"position" : [ 0.0 ],
									"vol" : [ 1.0 ],
									"unique" : [ 0 ],
									"automatic" : [ 0 ],
									"engine" : [ "avf" ],
									"rate" : [ 1.0 ],
									"texture_name" : [ "u270001996" ],
									"autostart" : [ 1 ],
									"loopend" : [ 0 ],
									"drawto" : [ "" ],
									"loopreport" : [ 0 ],
									"time" : [ 0 ],
									"usedstrect" : [ 0 ],
									"looppoints" : [ 0, 0 ],
									"framereport" : [ 0 ],
									"usesrcrect" : [ 0 ],
									"loopstart" : [ 0 ],
									"time_secs" : [ 0.0 ],
									"interp" : [ 0 ],
									"colormode" : [ "argb" ],
									"output_texture" : [ 0 ]
								}

							}
, 							{
								"filename" : "/Volumes/MCE 1TB OptiBay/RISD/assets-video/random-phjpg/bears.mov",
								"filekind" : "moviefile",
								"loop" : 0,
								"content_state" : 								{
									"outputmode" : [ 1 ],
									"out_name" : [ "u701001998" ],
									"dim" : [ 1, 1 ],
									"adapt" : [ 1 ],
									"moviefile" : [ "" ],
									"dstrect" : [ 0, 0, 1, 1 ],
									"srcrect" : [ 0, 0, 1, 1 ],
									"position" : [ 0.0 ],
									"vol" : [ 1.0 ],
									"unique" : [ 0 ],
									"automatic" : [ 0 ],
									"engine" : [ "avf" ],
									"rate" : [ 1.0 ],
									"texture_name" : [ "u270001996" ],
									"autostart" : [ 1 ],
									"loopend" : [ 0 ],
									"drawto" : [ "" ],
									"loopreport" : [ 0 ],
									"time" : [ 0 ],
									"usedstrect" : [ 0 ],
									"looppoints" : [ 0, 0 ],
									"framereport" : [ 0 ],
									"usesrcrect" : [ 0 ],
									"loopstart" : [ 0 ],
									"time_secs" : [ 0.0 ],
									"interp" : [ 0 ],
									"colormode" : [ "argb" ],
									"output_texture" : [ 0 ]
								}

							}
, 							{
								"filename" : "/Volumes/MCE 1TB OptiBay/RISD/assets-video/random-phjpg/-Serpentine Dance- by the Lumière brothers.mov",
								"filekind" : "moviefile",
								"loop" : 0,
								"content_state" : 								{
									"outputmode" : [ 1 ],
									"out_name" : [ "u701001998" ],
									"dim" : [ 1, 1 ],
									"adapt" : [ 1 ],
									"moviefile" : [ "" ],
									"dstrect" : [ 0, 0, 1, 1 ],
									"srcrect" : [ 0, 0, 1, 1 ],
									"position" : [ 0.0 ],
									"vol" : [ 1.0 ],
									"unique" : [ 0 ],
									"automatic" : [ 0 ],
									"engine" : [ "avf" ],
									"rate" : [ 1.0 ],
									"texture_name" : [ "u270001996" ],
									"autostart" : [ 1 ],
									"loopend" : [ 0 ],
									"drawto" : [ "" ],
									"loopreport" : [ 0 ],
									"time" : [ 0 ],
									"usedstrect" : [ 0 ],
									"looppoints" : [ 0, 0 ],
									"framereport" : [ 0 ],
									"usesrcrect" : [ 0 ],
									"loopstart" : [ 0 ],
									"time_secs" : [ 0.0 ],
									"interp" : [ 0 ],
									"colormode" : [ "argb" ],
									"output_texture" : [ 0 ]
								}

							}
 ]
					}
,
					"id" : "obj-1",
					"maxclass" : "jit.playlist",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "jit_matrix", "", "dictionary" ],
					"patching_rect" : [ 414.0, 275.0, 150.0, 92.0 ],
					"style" : ""
				}

			}
 ],
		"lines" : [ 			{
				"patchline" : 				{
					"destination" : [ "obj-2", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-1", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-8", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-10", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-13", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-11", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-1", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-12", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-16", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-12", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-21", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-12", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-26", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-12", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-12", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-13", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-38", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-17", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-26", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-19", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-17", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-21", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-24", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-21", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-26", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-24", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-25", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-26", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-19", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-38", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-10", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-5", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-9", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-8", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-11", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-9", 0 ]
				}

			}
 ],
		"dependency_cache" : [ 			{
				"name" : "Estee Lauder.mov",
				"bootpath" : "/Volumes/MCE 1TB OptiBay/RISD/assets-video/random-phjpg",
				"type" : "MooV",
				"implicit" : 1
			}
, 			{
				"name" : "bears.mov",
				"bootpath" : "/Volumes/MCE 1TB OptiBay/RISD/assets-video/random-phjpg",
				"type" : "MooV",
				"implicit" : 1
			}
, 			{
				"name" : "-Serpentine Dance- by the Lumière brothers.mov",
				"bootpath" : "/Volumes/MCE 1TB OptiBay/RISD/assets-video/random-phjpg",
				"type" : "MooV",
				"implicit" : 1
			}
 ],
		"autosave" : 0
	}

}
