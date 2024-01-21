Included in this directory are several PCB and plate files for Cutiepie by Flamwenco. Pay close attention to compatibility notes. Most of these PCB's and plates are NOT compatible with the original 2x1.75u and 3u case tops, or the original non-symmetrical case bottom. Choose a plate option that will support your desired layout, including stabilizers.

UPDATE: Added models for thick plates at /Baconspoon_Hotswap_and_BLE_PCBs/thick-plate-models. There are separate models for standard row stagger, uniform row stagger, and ortho. All three plates are for the 2x2u or 4u spacebar layout only. Stagger plates support the ISO P-key.

UPDATE: Added model for ortho PCB top case at /Case Files/Symmetrical 4u 2x2u Case/Orthopie Top Case - Baconspoon
This model is only compatible with the symmetrical case (2x2u or 4u spacebar) and add a central half unit blocker where the two alpha sections split.
	
-Hotswap, Uniform Stagger PCB
	-Integrated RP2040
	-No ISO Enter support
	-Uses uniform 0.25u stagger, as with the original cutiepie
	-Support for both 2u x 2 and 4u stabilizers.
	-Requires the symmetrical uniform or dual stagger plate for 2u stabilizer support.
	-Requires the symmetrical top and bottom cases with only 2x2u or 4u spacebar support.
	-Compatible with original "cutiepie2040" PCB firmware due to 1-for-1 pinout match.

-Hotswap, Standard Stagger PCB
	-Integrated RP2040
	-No ISO Enter support
	-Option for uniform 0.25u stagger, or traditional 0.5u stagger between the "A" and "Z" row.
	-Support for both 2u x 2 and 4u stabilizers.
	-Requires the symmetrical standard or dual stagger plate for 2u stabilizer support.
	-Requires the symmetrical top and bottom cases with only 2x2u or 4u spacebar support.
	-Compatible with original "cutiepie2040" PCB firmware due to 1-for-1 pinout match.

-Hotswap, Dual Stagger PCB
	-Made to replace uniform and standard stagger hotswap PCBs by supporting both layouts
	-Restores ISO P key support. To access stab support for ISO P, it is necessary to remove the hotswap socket for 1.5u P. Alternatively, a custom plate can be cut to support  a plate mount stabilizer. DXF and Gerber files for that plate will be made available in the repo.
	-Other features and case requirements are identical to the PCBs being replaced.

-Hotswap and Solder, Ortho PCB
	-Integrated RP2040
	-Supports 2x2u, 4u, and 2x1.75u spacebar layouts from original Flamwenco orthopie design.
	-2x1.75u spacebar layout is solder only and requires the removal of a breakaway tab to fit the appropriate case.
	-3u spacebar layout is not supported.
	-All supported layouts can be soldered. Soldered switches will be north-facing. Hotswap sockets are south-facing.
	-Compatible with vial firmware release for "orthopie" PCB due to 1-for-1 pinout match.

-Solder Only, Dual Stagger (Uniform and Standard) BLE PCB
	-Still in development
	-Integrated nRF52840 via Holyiot-18010-nRF52840 module
	-No ISO Enter support
	-Option for traditional 0.5u stagger between the "A" and "Z" row.
	-Support for both 2u x 2 and 4u stabilizers.
	-Requires the symmetrical standard or dual stagger plate for 2u stabilizer support.
	-Requires the symmetrical top and bottom cases with only 2x2u or 4u spacebar support.
	-Custom ZMK firmware

-Dual Stagger Plate
	-Maintains ISO switch and stabilizers support.
	-"Z" row switch cutouts support both standard and uniform stagger.
	-May be difficult to achieve perfect left-to-right alignment with 3-pin switches. 5-pin is recommended.
	-Gerbers for FR4 plates included with KiCad project files.

-Standard Stagger and Uniform Stagger Plates (separate)
	-Maintains ISO switch and stabilizers support for future compatibility with symmetrical case PCBs supporting ISO Enter.
	-Separate plates for each stagger option for better alignment with 3-pin switches.
	-Gerbers for FR4 plates included with KiCad project files.

-Ortho Plus Dual Stagger Universal Plate
	-Supports both ortho and stagger layout options.
	-Supports only 2x2u and 4u spacebar layouts.
	-Supports ISO P key with stabilizers.
	-Requires summetrical case design for 2x2u and 4u spacebar layouts.
	-Ortho build requires case with central 1.5u blocker to cover holes for staggered layouts.

-Ortho Plate
	-Supports ortho only, either 4u, 2x2u, or 2x1.75u spacebar layouts.
	-Works with or without central 1.5u blocker in the case.
